/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/iCalendar-Structs.h>
#import <iCalendar/ICSAppendable.h>

@class NSMutableData, NSString;

@interface ICSZStringWriter : NSObject <ICSAppendable> {

	z_stream_s* _strm;
	NSMutableData* _result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2 andFlush:(BOOL)arg3 ;
-(id)zResult;
@end

