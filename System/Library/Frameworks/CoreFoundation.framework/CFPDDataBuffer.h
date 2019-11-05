/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDDataBuffer : NSObject
+(id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(BOOL)arg2 ;
+(id)newBufferFromPropertyList:(void*)arg1 ;
+(id)newBufferFromCFData:(CFDataRef)arg1 ;
-(unsigned long long)length;
-(void*)bytes;
-(BOOL)purgable;
-(void)endAccessing;
-(BOOL)beginAccessing;
-(BOOL)validatePlist;
-(void)quicklyValidatePlistAndOnFailureInvokeBlock:(/*^block*/id)arg1 ;
-(void*)copyPropertyListWithMutability:(unsigned long long)arg1 error:(_CFError*)arg2 ;
-(CFDataRef)copyCFData;
-(id)copyXPCData;
@end

