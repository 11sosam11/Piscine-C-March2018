# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    who_am_i.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/12 15:20:47 by saolivei          #+#    #+#              #
#    Updated: 2018/03/12 19:31:12 by saolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
ldapwhoami -Q | sed -e 's/dn://g' -e 's/ou=march,//g' -e 's/,dc=org//g'