/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class MTLDebugInstrumentationData, NSString;

@interface MTLDebugSubProgram : NSObject {

	MTLDebugInstrumentationData* _data;
	DebugSubProgram* _debugSubProgram;

}

@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned line; 
-(id)retain;
-(oneway void)release;
-(NSString *)name;
-(NSString *)filename;
-(unsigned)line;
-(oneway void)releaseInternal;
@end

