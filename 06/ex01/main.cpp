/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:02:33 by marvin            #+#    #+#             */
/*   Updated: 2021/05/29 21:02:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

typedef struct Data{
	std::string str1;
	int i;
	std::string str2;
} Data;

void	*serialize(void){

	char *raw = new char[12];
	int num;
	char *ptr;

	srand(time(0));

	num = rand() % 200;
	ptr = reinterpret_cast<char *>(&num);
	for (int i = 0; i < 4; i++){
		raw[i] = (rand() % 95) + 32;
		raw[i + 4] = ptr[i];
		raw[i + 8] = (rand() % 95) + 32;
	}

	return (reinterpret_cast<void *>(raw));
}

Data	*deserialize(void *raw){

	Data	*data = new Data;
	char	*n_raw = reinterpret_cast<char *>(raw);
	char	str1[5];
	char	str2[5];
	char	s_num[4];

	for(int i = 0; i < 4; i++){
		str1[i] = n_raw[i];
		s_num[i] = n_raw[i + 4];
		str2[i] = n_raw[i + 8];
	}
	str1[4] = 0;
	str2[4] = 0;

	data->str1 = str1;
	data->str2 = str2;
	data->i = (int)*s_num;

	return data;
}


int main()
{
	void *data = serialize();
	char *raw = reinterpret_cast<char *>(data);
	int num = (int)raw[4];
	Data *result = deserialize(data);

	std::cout << result->str1 << std::endl;
	std::cout << result->str2 << std::endl;
	std::cout << result->i << std::endl;

	std::cout << "=======raw=========" << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << raw[i];
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << raw[i + 8];
	std::cout << std::endl;

	std::cout << num << std::endl;

	return 0;
}
