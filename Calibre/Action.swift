//
//  Action.swift
//  Calibre
//
//  Created by Jeremy Tregunna on 8/31/16.
//  Copyright © 2016 Greenshire, Inc. All rights reserved.
//

import Foundation

public protocol Action {
    var type: String { get }
}

public struct InitialAction: Action {
    public var type: String = "InitialAction"
}
