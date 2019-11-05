/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface _ACCMediaLibraryAccessoryInfo : NSObject {

	unsigned _windowPerLibrary;
	NSString* _accessoryUID;
	NSMutableSet* _nextUpdateStartFull;

}

@property (nonatomic,retain) NSString * accessoryUID;                         //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) unsigned windowPerLibrary;                       //@synthesize windowPerLibrary=_windowPerLibrary - In the implementation block
@property (nonatomic,retain) NSMutableSet * nextUpdateStartFull;              //@synthesize nextUpdateStartFull=_nextUpdateStartFull - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(id)initWithUID:(id)arg1 windowPerLibrary:(unsigned)arg2 ;
-(unsigned)windowPerLibrary;
-(void)setWindowPerLibrary:(unsigned)arg1 ;
-(NSMutableSet *)nextUpdateStartFull;
-(void)setNextUpdateStartFull:(NSMutableSet *)arg1 ;
@end

