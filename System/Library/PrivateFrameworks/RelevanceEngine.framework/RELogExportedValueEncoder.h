/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REExportedValueEncoder.h>

@interface RELogExportedValueEncoder : REExportedValueEncoder
+(id)_dateFormatter;
-(void)writeObjectStart:(id)arg1 toStream:(id)arg2 ;
-(void)writeObjectValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeArrayValuePairToStream:(id)arg1 valueWriter:(/*^block*/id)arg2 isLast:(BOOL)arg3 ;
-(void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeNumber:(id)arg1 toStream:(id)arg2 ;
-(void)writeString:(id)arg1 toStream:(id)arg2 ;
-(void)writeDate:(id)arg1 toStream:(id)arg2 ;
-(void)writeNullToStream:(id)arg1 ;
@end

