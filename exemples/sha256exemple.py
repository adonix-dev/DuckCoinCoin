#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan 19 17:22:04 2018

@author: vincent
"""

import hashlib
m = hashlib.sha256(b"C'est bon la galette,miam !")
print(m.hexdigest())
m = hashlib.sha256(b"C'est bon la galette,miam!")
print(m.hexdigest())