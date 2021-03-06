/* -*-mode:c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#include <stdexcept>
#include <vector>
#include <string>

#include "util.hh"
#include "ezio.hh"
#include "tcp_splitter_server.hh"


int main( int argc, char *argv[] )
{
    if ( argc != 1 ) {
        throw std::runtime_error( "Usage: " + std::string( argv[ 0 ] ) );
    }

    TCP_Splitter_Server splitter_server = TCP_Splitter_Server();
    /* clreate splitter server process */
    //std::cerr << "koho-client " << splitter_server.local_address().str( " " ) << std::endl;
    return splitter_server.loop();
}
