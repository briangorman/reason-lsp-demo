A simple project to demonstrate issues with reason-language-server resulting in issues being reported that are not real.

When looking at DemoComponent source code, reason-language-server displays something like

```
This function has type {. "id": string} => ReasonReact.reactElement
       It is applied to too many arguments; maybe you forgot a `;'
```

### Running the project

To run the component under test

    $ yarn start

To run tests

    $ yarn build && yarn jest


## License

Copyright © 2019 Brian Gorman 

Distributed under the ISC License 
