//
//  IPMenulet.h
//  iTunes Current Track
//
//  Created by Evan D. Hoffman on 10/13/11.
//  Copyright 2011. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "iTunes.h"


@interface IPMenulet : NSObject {
    NSStatusItem *statusItem;
//	iTunesApplication *iTunes
	;
	IBOutlet NSMenu *theMenu;
	NSMenuItem *currentTrackMenuItem;
	NSMenuItem *currentArtistMenuItem;
	NSMenuItem *currentAlbumMenuItem;
}

-(IBAction)updateSongTitle:(id)sender;

@end
