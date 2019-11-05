/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewCompositionalLayoutConfiguration.h>
#import <UIKitCore/NSCopying.h>

@class NSArray, NSString;

@interface UICollectionViewCompositionalLayoutConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, NSCopying> {

	long long _safeAreaReference;
	long long _scrollDirection;
	double _interSectionSpacing;
	NSArray* _boundarySupplementaryItems;

}

@property (assign,setter=_setSafeAreaReference:,getter=_safeAreaReference,nonatomic) long long safeAreaReference; 
@property (assign,nonatomic) long long scrollDirection;                                                                        //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) double interSectionSpacing;                                                                       //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;                                                               //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(void)setScrollDirection:(long long)arg1 ;
-(long long)scrollDirection;
-(void)setInterSectionSpacing:(double)arg1 ;
-(double)interSectionSpacing;
-(NSArray *)boundarySupplementaryItems;
-(unsigned long long)differencesFromConfiguration:(id)arg1 ;
-(long long)_safeAreaReference;
-(id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3 safeAreaReference:(long long)arg4 ;
-(void)_setSafeAreaReference:(long long)arg1 ;
@end

