/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCGamepad.h>

@class NSData;

@interface GCGamepadSnapshot : GCGamepad {

	NSData* snapshotData;

}

@property (copy) NSData * snapshotData; 
-(id)init;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(void)setSnapshotData:(NSData *)arg1 ;
-(NSData *)snapshotData;
-(id)initWithSnapshotData:(id)arg1 ;
@end

