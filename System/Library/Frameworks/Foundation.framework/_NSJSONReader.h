/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface _NSJSONReader : NSObject {

	id input;
	int kind;
	NSError* error;

}
+(BOOL)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
-(id)error;
-(void)setError:(id)arg1 ;
-(unsigned long long)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned long long*)arg2 ;
-(id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)parseData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)parseStream:(id)arg1 options:(unsigned long long)arg2 ;
@end

