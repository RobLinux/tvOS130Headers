/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXFeatureSpec.h>

@class PXCuratedLibrarySectionHeaderLayoutSpec, PXCuratedLibraryAllPhotosLayoutSpec, PXAssetsSectionLayoutSpec, PXYearsLayoutMetrics, PXMonthsLayoutMetrics;

@interface PXCuratedLibraryLayoutSpec : PXFeatureSpec {

	double _estimatedSpacingBetweenMonths;
	double _spacingBetweenYears;
	double _spacingBetweenMonths;
	double _spacingBetweenDays;
	BOOL _allowsPaginatedScrollingInYearsAndMonths;
	BOOL _allowsSlideshowInYears;
	long long _axis;
	PXCuratedLibrarySectionHeaderLayoutSpec* _daysTopHeaderSpec;
	PXCuratedLibrarySectionHeaderLayoutSpec* _allPhotosFloatingHeaderSpec;
	PXCuratedLibraryAllPhotosLayoutSpec* _allPhotosLayoutSpec;
	PXAssetsSectionLayoutSpec* _sectionLayoutSpec;
	PXYearsLayoutMetrics* _yearsLayoutMetrics;
	PXMonthsLayoutMetrics* _monthsLayoutMetrics;
	double _spacingBetweenSafeAreaTopAndFirstYearCard;
	double _spacingBetweenSafeAreaTopAndFirstMonthTitle;

}

@property (nonatomic,readonly) long long axis;                                                                     //@synthesize axis=_axis - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionHeaderLayoutSpec * daysTopHeaderSpec;                        //@synthesize daysTopHeaderSpec=_daysTopHeaderSpec - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionHeaderLayoutSpec * allPhotosFloatingHeaderSpec;              //@synthesize allPhotosFloatingHeaderSpec=_allPhotosFloatingHeaderSpec - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAllPhotosLayoutSpec * allPhotosLayoutSpec;                          //@synthesize allPhotosLayoutSpec=_allPhotosLayoutSpec - In the implementation block
@property (nonatomic,readonly) PXAssetsSectionLayoutSpec * sectionLayoutSpec;                                      //@synthesize sectionLayoutSpec=_sectionLayoutSpec - In the implementation block
@property (nonatomic,readonly) PXYearsLayoutMetrics * yearsLayoutMetrics;                                          //@synthesize yearsLayoutMetrics=_yearsLayoutMetrics - In the implementation block
@property (nonatomic,readonly) PXMonthsLayoutMetrics * monthsLayoutMetrics;                                        //@synthesize monthsLayoutMetrics=_monthsLayoutMetrics - In the implementation block
@property (nonatomic,readonly) double spacingBetweenSafeAreaTopAndFirstYearCard;                                   //@synthesize spacingBetweenSafeAreaTopAndFirstYearCard=_spacingBetweenSafeAreaTopAndFirstYearCard - In the implementation block
@property (nonatomic,readonly) double spacingBetweenSafeAreaTopAndFirstMonthTitle;                                 //@synthesize spacingBetweenSafeAreaTopAndFirstMonthTitle=_spacingBetweenSafeAreaTopAndFirstMonthTitle - In the implementation block
@property (nonatomic,readonly) BOOL allowsPaginatedScrollingInYearsAndMonths;                                      //@synthesize allowsPaginatedScrollingInYearsAndMonths=_allowsPaginatedScrollingInYearsAndMonths - In the implementation block
@property (nonatomic,readonly) BOOL allowsSlideshowInYears;                                                        //@synthesize allowsSlideshowInYears=_allowsSlideshowInYears - In the implementation block
-(long long)axis;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3 ;
-(double)defaultInterlayoutSpacingForZoomLevel:(long long)arg1 ;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)daysTopHeaderSpec;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)allPhotosFloatingHeaderSpec;
-(PXCuratedLibraryAllPhotosLayoutSpec *)allPhotosLayoutSpec;
-(PXAssetsSectionLayoutSpec *)sectionLayoutSpec;
-(PXYearsLayoutMetrics *)yearsLayoutMetrics;
-(PXMonthsLayoutMetrics *)monthsLayoutMetrics;
-(double)spacingBetweenSafeAreaTopAndFirstYearCard;
-(double)spacingBetweenSafeAreaTopAndFirstMonthTitle;
-(BOOL)allowsPaginatedScrollingInYearsAndMonths;
-(BOOL)allowsSlideshowInYears;
@end

