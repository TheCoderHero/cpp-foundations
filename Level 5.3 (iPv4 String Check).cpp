//Given a string, find out if it satisfies the IPv4 address naming rules.

bool isIPv4Address(std::string inputString) {
    regex str ("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|2[5][0-5])\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|2[5][0-5]){1}");
    return regex_match(inputString, str);
}

//Position: 384
