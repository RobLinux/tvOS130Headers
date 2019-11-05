/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPCFWrapper : NSObject {

	BOOL _nullRef;
	const void* _refValue;

}

@property (assign,getter=isNullRef,nonatomic) BOOL nullRef;              //@synthesize nullRef=_nullRef - In the implementation block
@property (nonatomic,readonly) const void* refValue;                     //@synthesize refValue=_refValue - In the implementation block
-(id)description;
-(void)dealloc;
-(id)initWithCFType:(void*)arg1 ;
-(const void*)refValue;
-(BOOL)isNullRef;
-(void)setNullRef:(BOOL)arg1 ;
@end

