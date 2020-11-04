<p align="center">
    <img src="https://raw.githubusercontent.com/nunomaduro/bombe/master/art/banner.png" alt="Bombe logo" width="480">
</p>

---

Bombe was created by, and is maintained by **[Nuno Maduro](https://github.com/nunomaduro)**, and is a tool for benchmarking the given url response status and response time.

⚡️ Get started by cloning this project locally with [Git](https://git-scm.com/downloads):

```bash
git clone https://github.com/nunomaduro/bombe
```

✅ Build the project like so:
```bash
cd bombe
make
```

🚀 Next, run Bombe:
```bash
cd bin
./bombe <your-url.com> <number-of-requests>
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
