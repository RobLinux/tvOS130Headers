/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class NSString;

@interface SAPAStyleSourceInfo : NSObject {

	unsigned _lineNum;
	unsigned _columnNum;
	unsigned long long _offsetIntoTextSegment;
	unsigned long long _length;
	NSString* _filePath;

}

@property (assign) unsigned long long offsetIntoTextSegment;              //@synthesize offsetIntoTextSegment=_offsetIntoTextSegment - In the implementation block
@property (assign) unsigned long long length;                             //@synthesize length=_length - In the implementation block
@property (assign) unsigned lineNum;                                      //@synthesize lineNum=_lineNum - In the implementation block
@property (assign) unsigned columnNum;                                    //@synthesize columnNum=_columnNum - In the implementation block
@property (retain) NSString * filePath;                                   //@synthesize filePath=_filePath - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA27*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(unsigned long long)offsetIntoTextSegment;
-(unsigned)lineNum;
-(unsigned)columnNum;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA27*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)setOffsetIntoTextSegment:(unsigned long long)arg1 ;
-(void)setLineNum:(unsigned)arg1 ;
-(void)setColumnNum:(unsigned)arg1 ;
@end

