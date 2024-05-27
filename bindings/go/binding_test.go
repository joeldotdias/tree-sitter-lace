package tree_sitter_lace_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-lace"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lace.Language())
	if language == nil {
		t.Errorf("Error loading Lace grammar")
	}
}
