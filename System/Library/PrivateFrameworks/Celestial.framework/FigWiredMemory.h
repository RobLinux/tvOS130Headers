/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FigWiredMemory : NSObject {

	void* _bytes;
	unsigned long long _length;
	unsigned long long _roundedLength;

}

@property (nonatomic,readonly) void* bytes;                            //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
+(void)initialize;
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(id)initWithLength:(unsigned long long)arg1 ;
@end

