
        
		/* Enter your code here. */
        
        try {
            Server::compute(A, B);
        }
        catch (bad_alloc& e) {
            cout << "Not enough memory" << endl;
        }
        catch (exception& e) {
            cout << "Exception: " << e.what() << endl;
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }

