/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <appstored/appstored-Structs.h>
@class NSString;

@interface ODRPreallocatedFile : NSObject {

	fstore _fStore;
	int _fileDescriptor;
	NSString* _path;

}

@property (readonly) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (readonly) long long size; 
@property (readonly) int fileDescriptor;              //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
-(void)dealloc;
-(long long)size;
-(NSString *)path;
-(int)fileDescriptor;
-(id)initWithPath:(id)arg1 flags:(int)arg2 size:(long long)arg3 ;
-(id)initForSpaceReduction:(long long)arg1 ;
@end

