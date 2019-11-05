/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigXPCCoding.h>
#import <Celestial/NSCopying.h>

@class NSString;

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _sinkID;

}

@property (nonatomic,copy) NSString * sinkID;                       //@synthesize sinkID=_sinkID - In the implementation block
@property (nonatomic,readonly) int sinkType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForSinkType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(NSString *)sinkID;
-(void)setSinkID:(NSString *)arg1 ;
@end

