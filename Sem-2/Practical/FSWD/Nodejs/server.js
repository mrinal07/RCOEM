var http = require('http')

http.createServer( function(req,res){   

    var webURL = req.url;

    if( webURL == '/about' )
    {
        res.write("About Page");
        res.end();
    }
    if( webURL == '/' )
    {
        res.end( "Home Page" );
    }
} ).listen(8081);

console.log("Hello node server");