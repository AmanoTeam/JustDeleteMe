import unicodedata

def strip_accents(string):
	
	return "".join(
		[
			character for character in unicodedata.normalize("NFKD", string) if (
				not unicodedata.combining(character)
			)
		]
	)

def strip_punctuation(string):
	
	return "".join(
		[
			character for character in string if (
				character.isalpha() or 
				character.isdigit() or
				character.isspace()
			)
		]
	)

def strip_whitespaces(string):
	
	return " ".join(string.split())

def create_search_query(s):
	
	s = strip_whitespaces(
		string = strip_punctuation(
			string = strip_accents(
				string = s
			)
		)
	)
	
	s = s.lower()
	
	return s
	