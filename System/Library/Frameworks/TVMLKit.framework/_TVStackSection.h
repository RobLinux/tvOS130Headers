/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVStackSection : NSObject {

	double _sectionHeight;
	double _showcaseSectionHeight;
	long long _firstRowIndex;
	long long _rowCount;
	long long _firstItemRowIndex;
	UIEdgeInsets _sectionSpacing;
	UIEdgeInsets _showcaseSectionSpacing;
	TVRowMetrics _compoundRowMetrics;

}

@property (assign,nonatomic) double sectionHeight;                             //@synthesize sectionHeight=_sectionHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionSpacing;                      //@synthesize sectionSpacing=_sectionSpacing - In the implementation block
@property (assign,nonatomic) TVRowMetrics compoundRowMetrics;                  //@synthesize compoundRowMetrics=_compoundRowMetrics - In the implementation block
@property (assign,nonatomic) double showcaseSectionHeight;                     //@synthesize showcaseSectionHeight=_showcaseSectionHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets showcaseSectionSpacing;              //@synthesize showcaseSectionSpacing=_showcaseSectionSpacing - In the implementation block
@property (assign,nonatomic) long long firstRowIndex;                          //@synthesize firstRowIndex=_firstRowIndex - In the implementation block
@property (assign,nonatomic) long long rowCount;                               //@synthesize rowCount=_rowCount - In the implementation block
@property (assign,nonatomic) long long firstItemRowIndex;                      //@synthesize firstItemRowIndex=_firstItemRowIndex - In the implementation block
-(id)debugDescription;
-(long long)rowCount;
-(void)setRowCount:(long long)arg1 ;
-(double)sectionHeight;
-(void)setSectionHeight:(double)arg1 ;
-(UIEdgeInsets)sectionSpacing;
-(void)setSectionSpacing:(UIEdgeInsets)arg1 ;
-(TVRowMetrics)compoundRowMetrics;
-(void)setCompoundRowMetrics:(TVRowMetrics)arg1 ;
-(double)showcaseSectionHeight;
-(void)setShowcaseSectionHeight:(double)arg1 ;
-(UIEdgeInsets)showcaseSectionSpacing;
-(void)setShowcaseSectionSpacing:(UIEdgeInsets)arg1 ;
-(long long)firstRowIndex;
-(void)setFirstRowIndex:(long long)arg1 ;
-(long long)firstItemRowIndex;
-(void)setFirstItemRowIndex:(long long)arg1 ;
@end

