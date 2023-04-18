import sys
import subprocess
import pkg_resources
from os import system, name
from pkg_resources import DistributionNotFound, VersionConflict

##### CUSTOM EXCEPTIONS #####
class Template(Exception): pass

##### USEFUL FUNCTIONS #####
# Clears terminal screen on Win, Mac, & Linux
def clear():
    system('cls' if name == 'nt' else 'clear')

##### DEPENDENCY MANAGER #####
def install_requirement(requirement: str) -> bool:
    should_install = False
    try: 
        pkg_resources.require(requirement)
    except (DistributionNotFound, VersionConflict): 
        return True
    return False

def install_packages(reqList: list[str]) -> None:
    if not reqList: return
    
    try:
        reqs = [req for req in reqList if install_requirement(req)]
        if len(reqs) > 0:
            subprocess.check_call([sys.executable, "-m", "pip", "install", *reqs])

    except Exception as e:
        print(f"[ERROR]: {e}")
        
#! Add required packages here
REQUIRED_PACKAGES = []
install_packages(REQUIRED_PACKAGES)