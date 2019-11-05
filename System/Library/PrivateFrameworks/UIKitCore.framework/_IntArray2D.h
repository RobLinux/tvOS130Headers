/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _IntArray2D : NSObject {

	long long* _arrayData;
	unsigned long long _iSize;
	unsigned long long _jSize;
	BOOL _shouldBoundsCheck;

}

@property (nonatomic,readonly) unsigned long long iSize;              //@synthesize iSize=_iSize - In the implementation block
@property (nonatomic,readonly) unsigned long long jSize;              //@synthesize jSize=_jSize - In the implementation block
@property (assign,nonatomic) BOOL shouldBoundsCheck;                  //@synthesize shouldBoundsCheck=_shouldBoundsCheck - In the implementation block
+(id)arrayWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2 ;
-(id)description;
-(void)dealloc;
-(void)setShouldBoundsCheck:(BOOL)arg1 ;
-(void):(unsigned long long)arg1 :(unsigned long long)arg2 newValue:(long long)arg3 ;
-(long long):(unsigned long long)arg1 :(unsigned long long)arg2 ;
-(unsigned long long)iSize;
-(unsigned long long)jSize;
-(long long):(unsigned long long)arg1 :(unsigned long long)arg2 outOfBoundsReturnValue:(long long)arg3 ;
-(id)initWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2 ;
-(void)assertBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2 ;
-(BOOL)inBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2 ;
-(BOOL)shouldBoundsCheck;
@end

