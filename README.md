Bombe is a tool for benchmarking the given url response status & time.

⚡️ Get started by cloning this project locally with [Git](https://git-scm.com/downloads):

```bash
git clone https://github.com/nunomaduro/bombe-cli
```

✅ Build the project like so:
```bash
cd bombe-cli
make
```

🚀 Next, run Bombe:
```bash
./bin/bombe <your-url.com> <number-of-requests>
```

🤓 The output will be something like this:
```
➜  ./bombe nunomaduro.com 10
[200] nunomaduro.com ~= 0.216454 seconds 
[200] nunomaduro.com ~= 0.109665 seconds 
[200] nunomaduro.com ~= 0.098251 seconds 
[200] nunomaduro.com ~= 0.097521 seconds 
[200] nunomaduro.com ~= 0.098594 seconds 
[200] nunomaduro.com ~= 0.121236 seconds 
[200] nunomaduro.com ~= 0.105027 seconds 
[200] nunomaduro.com ~= 0.105631 seconds 
[200] nunomaduro.com ~= 0.099940 seconds 
[200] nunomaduro.com ~= 0.114933 seconds
```

**Bombe** was created by **[Nuno Maduro](https://twitter.com/enunomaduro)** under the **[MIT license](https://opensource.org/licenses/MIT)**.
