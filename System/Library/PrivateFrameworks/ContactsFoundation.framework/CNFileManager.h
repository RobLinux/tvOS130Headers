/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager;

@interface CNFileManager : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(id)init;
-(id)initWithFileManager:(id)arg1 ;
-(id)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 ;
-(NSFileManager *)fileManager;
@end

