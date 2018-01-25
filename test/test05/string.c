/* Copyright (C) 2016 Jeremiah Orians
 * This file is part of stage0.
 *
 * stage0 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * stage0 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with stage0.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Validate that string statements behave correctly */
int putchar(int);
void exit(int);

void printc(char* s, int a)
{
	while((0 != s[0]) && (a > 0))
	{
		putchar(s[0]);
		s = s + 1;
		a = a - 1;
	}
}

int main()
{
	char* string = "mes Hello ";
	printc(string + 4, 99);
	printc(string, 3);
	return 42;
}