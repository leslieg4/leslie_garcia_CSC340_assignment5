#include <iostream>
#include <string>
#include <vector>

#include "Graph.h"
#include "LinkedBagDS/LinkedBag.h"
#include "Product.h"

using namespace std;
int main() {
	// Create a list of Users
	// Add 10 distinct products to the vector
	// TO DO 

	// Initialize a graph with n vertices (where n is the number of Products) 
	//	 Indicate whether it is directed or undirected 
	// TO DO 
	/* We are deciding to make our graph undirected because there will be mulitple products
	being purchased together and simultaneously.  */ 

	vector<shared_ptr<Product>> products;
	products.push_back(make_shared<Product>("Kiss Fake Nails", "For the most slayconic nails.", 3.4, 2057));
	products.push_back(make_shared<Product>("Human Cadaver", "An excellent study tool for doctors and aspiring grave robbers.", 2, 3));
	products.push_back(make_shared<Product>("Stanley Cup", "For if you enjoy holding your beverage in your hand all day.", 3.7, 7827));
	products.push_back(make_shared<Product>("Collagen Powder", "For putting in your matcha in the morning.", 4.3, 3948));
	products.push_back(make_shared<Product>("Really Expensive Whole Milk", "If you have more money than you know what to do with.", 4.8, 2746));

	products.push_back(make_shared<Product>("Tyson Chicken Nuggets", "Tasty, fun-sized pieces of chicken", 4.5, 1,500));
	products.push_back(make_shared<Product>("Slay-licious Pink Lip Gloss", "A 3.5oz bottle of gloss for divas.", 4.1, 738));
	products.push_back(make_shared<Product>("Sugary Energy Drink", "A drink that'll have you bouncing off the walls.", 3.6, 1990));
	products.push_back(make_shared<Product>("Teeth", "Collected from various deceased dentists.", 0.4, 4));
	products.push_back(make_shared<Product>("Sticky Bra", "Adhesive, padded bra that lifts and adds shape to your outfits.", 3.9, 1738));

	// Add 15-20 edges (productA, productB, weight)
	// TO DO 
	Graph<int> productGraph(10, false);
	productGraph.addEdge(0, 1, 2); 
	productGraph.addEdge(2, 9, 101); 
	productGraph.addEdge(5, 9, 1953);
	productGraph.addEdge(9, 8, 1);
	productGraph.addEdge(9, 3, 96);
	productGraph.addEdge(2, 6, 356);
	productGraph.addEdge(4, 6, 213);
	productGraph.addEdge(7, 8, 1);  
	productGraph.addEdge(0, 5, 420); 
	productGraph.addEdge(6, 7, 32);
	productGraph.addEdge(3, 5, 23);
	productGraph.addEdge(5, 6, 69);
	productGraph.addEdge(4, 9, 11);
	productGraph.addEdge(0, 2, 200);
	productGraph.addEdge(4, 7, 58);
	productGraph.addEdge(3, 8, 1);   

	// Print the adjacency list
	productGraph.printGraph();

	// Depth First traversal should print product information not just indices
	int start = 0;
	// Call DFT 
	// productGraph.DFT(0, ...);


	bool found = false;
	// Depth First search
	string prodName1 = ""; //replace with a product name that exists 
	// Call DFS 
	// TO DO:  
	// found = productGraph.DFS(prodName1, ...);
	if(found){
		cout << prodName1 << " has been found in the graph!" << endl;
	}else{
		cout << prodName1 << " has not been found in the graph!" << endl;
	}

	string prodName2 = ""; //replace with a product name that DOES NOT exist 
	// Call DFS 
	// TO DO:
	// found = productGraph.DFS(prodName2, ...);
	if(found){
		cout << prodName2 << " has been found in the graph!" << endl;
	}else{
		cout << prodName2 << " has not been found in the graph!" << endl;
	}

	return 0;
}
