/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, NSLayoutConstraint, NSString;

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _attributionLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * attributionSummary; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setAttributionSummary:(NSString *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(id)_moreString;
-(NSString *)attributionSummary;
@end

