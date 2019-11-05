/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MDLTextureFilter : NSObject {

	unsigned long long sWrapMode;
	unsigned long long tWrapMode;
	unsigned long long rWrapMode;
	unsigned long long minFilter;
	unsigned long long magFilter;
	unsigned long long mipFilter;

}

@property (assign,nonatomic) unsigned long long sWrapMode; 
@property (assign,nonatomic) unsigned long long tWrapMode; 
@property (assign,nonatomic) unsigned long long rWrapMode; 
@property (assign,nonatomic) unsigned long long minFilter; 
@property (assign,nonatomic) unsigned long long magFilter; 
@property (assign,nonatomic) unsigned long long mipFilter; 
-(id)init;
-(unsigned long long)minFilter;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(unsigned long long)magFilter;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(unsigned long long)mipFilter;
-(void)setMipFilter:(unsigned long long)arg1 ;
-(unsigned long long)sWrapMode;
-(void)setSWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)tWrapMode;
-(void)setTWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)rWrapMode;
-(void)setRWrapMode:(unsigned long long)arg1 ;
@end

