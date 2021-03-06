/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/NSCopying.h>

@class NSArray;

@interface ChunkedDigest : NSObject <NSCopying> {

	unsigned _chunkSize;
	NSArray* _chunkDigests;
	long long _chunkType;

}

@property (nonatomic,copy) NSArray * chunkDigests;              //@synthesize chunkDigests=_chunkDigests - In the implementation block
@property (assign,nonatomic) unsigned chunkSize;                //@synthesize chunkSize=_chunkSize - In the implementation block
@property (assign,nonatomic) long long chunkType;               //@synthesize chunkType=_chunkType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)chunkType;
-(void)setChunkType:(long long)arg1 ;
-(void)setChunkSize:(unsigned)arg1 ;
-(unsigned)chunkSize;
-(void)setChunkDigests:(NSArray *)arg1 ;
-(NSArray *)chunkDigests;
@end

