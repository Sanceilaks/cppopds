#pragma once

#include <string_view>
#include <optional>
#include <vector>

namespace cppopds {
	using default_content_t = std::string;

	struct author_t {
		std::string name;
		std::string uri;
	};

	struct category_t {
		std::string scheme;
		std::string term;
		std::string label;
	};

	struct summary_t {
		std::string type;
		default_content_t summary;
	};

	struct content_t {
		std::string type;
		default_content_t content;
	};

	struct link_t {
		std::string rel;
		std::string href;
		std::string type;
	};

	struct entry_t {
		std::string title;
		std::string id;

		std::optional<std::string> updated;
		std::optional<author_t> author;
		std::optional<summary_t> summary;
		std::optional<content_t> content;
		std::optional<std::vector<link_t>> links;
	};

	struct opds_document {
		std::string title;
		std::string search_link;
		author_t author;
		std::string id;
		std::string subtitle;
	};
}