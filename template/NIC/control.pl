NIC->prompt("APPNAME", "Name of the app", {default => ""});

NIC->prompt("APPVERSION", "Version of the app", {default => "0.1"});

NIC->prompt("USER", "Who made the hack", {default => ""});

NIC->prompt("SITE", "What site is the hack for", {default => ""});

NIC->variable("KILL_RULE") = "";

my $kill_apps = NIC->prompt("KILL_APPS", "List of applications to terminate upon installation (space-separated, '-' for none)", {default => ""});
if($kill_apps ne "-") {
	my @apps = split(/\s+/, $kill_apps);
	my @commands = map {"killall -9 $_"} @apps;
	NIC->variable("KILL_RULE") = "after-install::\n\tinstall.exec \"".join("; ", @commands)."\"";
}