/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NGMRollingBitmaskBuffer : NSObject {

	unsigned _upper_buffer_index;
	unsigned _valid_values_buffer_size;
	char* _valid_values_buffer;

}

@property (assign) unsigned upper_buffer_index;                    //@synthesize upper_buffer_index=_upper_buffer_index - In the implementation block
@property (assign) char* valid_values_buffer;                      //@synthesize valid_values_buffer=_valid_values_buffer - In the implementation block
@property (assign) unsigned valid_values_buffer_size;              //@synthesize valid_values_buffer_size=_valid_values_buffer_size - In the implementation block
-(id)init;
-(void)dealloc;
-(char*)valid_values_buffer;
-(unsigned)valid_values_buffer_size;
-(id)initWithData:(id)arg1 upperBufferIndex:(unsigned)arg2 ;
-(BOOL)processIncomingCounter:(unsigned)arg1 ;
-(id)bufferData;
-(unsigned)upper_buffer_index;
-(void)setUpper_buffer_index:(unsigned)arg1 ;
-(void)setValid_values_buffer:(char*)arg1 ;
-(void)setValid_values_buffer_size:(unsigned)arg1 ;
@end

