/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/AltAspect.h>

@class NSString;

@interface OrientationInfo : NSObject <AltAspect> {

	BOOL _isRotated;
	unsigned _inputID;
	double _altAspect;

}

@property (assign,nonatomic) double altAspect;                      //@synthesize altAspect=_altAspect - In the implementation block
@property (assign,nonatomic) BOOL isRotated;                        //@synthesize isRotated=_isRotated - In the implementation block
@property (assign,nonatomic) unsigned inputID;                      //@synthesize inputID=_inputID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(unsigned)inputID;
-(void)setInputID:(unsigned)arg1 ;
-(BOOL)isRotated;
-(void)setIsRotated:(BOOL)arg1 ;
-(double)altAspect;
-(void)setAltAspect:(double)arg1 ;
@end
