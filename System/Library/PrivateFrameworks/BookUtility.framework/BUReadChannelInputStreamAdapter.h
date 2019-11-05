/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookUtility/BUInputStream.h>

@protocol BUReadChannel, OS_dispatch_data;
@class NSObject, NSString;

@interface BUReadChannelInputStreamAdapter : NSObject <BUInputStream> {

	id<BUReadChannel> _readChannel;
	NSObject*<OS_dispatch_data> _leftoverData;
	long long _offset;

}

@property (nonatomic,retain) id<BUReadChannel> readChannel;                         //@synthesize readChannel=_readChannel - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_data> leftoverData;              //@synthesize leftoverData=_leftoverData - In the implementation block
@property (assign,nonatomic) long long offset;                                      //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(long long)offset;
-(void)setOffset:(long long)arg1 ;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(void)setLeftoverData:(NSObject*<OS_dispatch_data>)arg1 ;
-(NSObject*<OS_dispatch_data>)leftoverData;
-(id<BUReadChannel>)readChannel;
-(void)setReadChannel:(id<BUReadChannel>)arg1 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithReadChannel:(id)arg1 ;
@end

