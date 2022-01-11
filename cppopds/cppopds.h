#pragma once

#include <string_view>
#include <filesystem>
#include <fstream>

namespace cppopds {
	struct author_t {
		std::string name;
		std::string uri;
	};

	struct entry_t {
		std::string title;
		std::string id;
	};

	struct opds_document {
		std::string title;
		std::string search_link;
		author_t author;
		std::string id;
		std::string subtitle;
	};
}