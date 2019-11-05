/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BUInputStream <NSObject>
@required
-(void)close;
-(long long)offset;
-(void)seekToOffset:(long long)arg1;
-(BOOL)canSeek;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;

@end

