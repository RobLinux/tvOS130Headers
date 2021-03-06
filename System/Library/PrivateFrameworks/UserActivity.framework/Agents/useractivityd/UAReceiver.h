/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>

@class NSSet;

@interface UAReceiver : UACornerActionManagerHandler {

	NSSet* scanningForTypes;

}

@property (readonly) BOOL receiving; 
@property (copy) NSSet * scanningForTypes; 
-(BOOL)terminate;
-(id)statusString;
-(BOOL)fetchMoreAppSuggestions;
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(id)receivedItems;
-(BOOL)receiving;
-(NSSet *)scanningForTypes;
-(void)setScanningForTypes:(NSSet *)arg1 ;
@end

