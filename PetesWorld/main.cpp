// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// add your name here: Leo Bolaks
//  or here Seán Kroczek
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to G or T to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0;
		}
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}

	}
	if (letter == 'b' || letter == 'B')
	{
		if (region == 1)
		{
			std::cout << "Bahamas, Barbados, Belize, Bermuda, Bolivia, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belgium, Belarus, Bosnia and Herzegovina, Bulgaria" << std::endl; 
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi Eastern Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "BahrainArabian Peninsula, Bangladesh, Bhutan, Brunei Darussalam" << std::endl; 
		}
		if (region == 5)
		{
			std::cout << "There are no b's in the rest of the world" << std::endl;
		}
	}
	if (letter == 'c' || letter == 'C')
	{
		if (region == 1)
		{
			std::cout << "Canada North, Cayman Islands Greater Antilles, Chile, Colombia, Costa Rica, Cuba" << std::endl; 
		}
		if (region == 2)
		{
			std::cout << "Croatia Balkan Peninsula, Czech Republic" << std::endl; 
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Democratic Republic of the Congo, Congo, Côte D'ivoire" << std::endl; 
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Island, Cocos Islands, Ciprus" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cook Islands" << std::endl; 
		}
	}
	if (letter == 'd' || letter == 'D')
	{
		if (region == 1)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl; 
		}
		if (region == 2)
		{
			std::cout << "Denmark" << std::endl; 
		}
		if (region == 3)
		{
			std::cout << "Djibouti" << std::endl; 
		}
		if (region == 4)
		{
			std::cout << "There is nothing in region 4" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There is nothing in region 5" << std::endl; 
		}
	}
	if (letter == 'e' || letter == 'E')
	{
		if (region == 1)
		{
			std::cout << "Ecuador, El Salvador" << std::endl; 
		}
		if (region == 2)
		{
			std::cout << "Estonia" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Egypt, Equatorial Guinea, Eritrea, Ethiopia" << std::endl; 
		}
		if (region == 4)
		{
			std::cout << "East Timor" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There is nothing in region 5" << std::endl;
		}
	}
	if (letter == 'f' || letter == 'F')
	{
		if (region == 1)
		{
			std::cout << "Falkland Islands, French Guiana" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Faroe Islands, Finland, France" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There is nothing in region 3" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "French Southern Territories" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "French Polynesia, Fiji" << std::endl;
		}
	}
	if (letter == 'g' || letter == 'G')
	{
		if (region == 1)
		{
			std::cout << "Greenland, Grenada, Guadeloupe, Guatemala, Guyana" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Germany, Georgia, Gibraltar" << std::endl; 
		}
		if (region == 3)
		{
			std::cout << "Gabon, Gambia, Ghana, Guinea, Guinea Bissau" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There is nothing in region 4" << std::endl; 
		}
		if (region == 5)
		{
			std::cout << "Guam" << std::endl; 
		}
	}
	
	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	if (letter == 'y' || letter == 'Y')
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen Arabian Peninsula" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ys in the rest of the world" << std::endl;
		}
	}
	if (letter == 'x' || letter == 'X')
	{
		if (region == 1)
		{
			std::cout << "There are no Xs in Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Xs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Xs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Xs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Xs in the rest of the world" << std::endl;
		}
	}
	if (letter == 'w' || letter == 'W')
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << " Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands" << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V')
	{
		if (region == 1)
		{
			std::cout << "Venezuela, Virgin Islands (British), Virgin Islands (U.S)" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City State" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanatau" << std::endl;
		}
	}
	if (letter == 'u' || letter == 'U')
	{
		if (region == 1)
		{
			std::cout << "United States, Uruguay" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Ukraine, United Kingdom" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Uganda" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "United Arab Emirates, Uzbekistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Us in The rest of the world" << std::endl;
		}
	}
	if (letter == 't' || letter == 'T')
	{
		if (region == 1)
		{
			std::cout << "Turks and Caicos Islands, Trinidad and Tobago" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ts in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Tanzania, Togo, Tunisia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Taiwan, Tajikistan, Thailand, Tibet, Timor-Leste, Turkey, Turkmenistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Tokelau, Tonga, Tuvalu" << std::endl;
		}
	}
	
	
	return 1;
}