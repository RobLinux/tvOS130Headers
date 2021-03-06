/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/NSCopying.h>

@interface BKDisplayAnnotationLocation : NSObject <NSCopying> {

	BOOL _inhibitRotation;
	BOOL _shouldAutoposition;
	CGPoint _superBias;
	CGPoint _point;

}

@property (assign,nonatomic) BOOL inhibitRotation;                 //@synthesize inhibitRotation=_inhibitRotation - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoposition;              //@synthesize shouldAutoposition=_shouldAutoposition - In the implementation block
@property (assign,nonatomic) CGPoint superBias;                    //@synthesize superBias=_superBias - In the implementation block
@property (assign,nonatomic) CGPoint point;                        //@synthesize point=_point - In the implementation block
+(id)controlledBySupernode;
+(id)centerAtPoint:(CGPoint)arg1 ;
+(id)relativeToTopLeftOfSuper:(CGPoint)arg1 ;
+(id)relativeToBottomLeftOfSuper:(CGPoint)arg1 ;
+(id)relativeToBottomMiddleOfSuper:(CGPoint)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(BOOL)inhibitRotation;
-(void)setInhibitRotation:(BOOL)arg1 ;
-(BOOL)shouldAutoposition;
-(void)setShouldAutoposition:(BOOL)arg1 ;
-(CGPoint)superBias;
-(void)setSuperBias:(CGPoint)arg1 ;
@end

