/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:58:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSystemBulletinService.app/TVSystemBulletinService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemBulletinService/TVSystemBulletinService-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface TVSBSLevelBarView : UIView {

	NSArray* _boxes;
	unsigned long long _numLevels;
	unsigned long long _level;

}

@property (nonatomic,readonly) unsigned long long numLevels;              //@synthesize numLevels=_numLevels - In the implementation block
@property (assign,nonatomic) unsigned long long level;                    //@synthesize level=_level - In the implementation block
+(CGRect)_boundsForNumLevels:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)level;
-(void)setLevel:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)numLevels;
-(id)initWithNumLevels:(unsigned long long)arg1 ;
-(void)_updateLevels;
@end

