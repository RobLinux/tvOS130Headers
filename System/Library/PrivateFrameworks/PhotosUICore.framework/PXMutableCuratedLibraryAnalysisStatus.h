/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PXMutableCuratedLibraryAnalysisStatus <NSObject>
@property (assign,nonatomic) long long state; 
@property (nonatomic,copy) NSString * localizedTitle; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) float displayProgress; 
@property (assign,nonatomic) BOOL isDaysMonthsYearsStructureEnabled; 
@property (assign,nonatomic) BOOL isDevicePlugged; 
@required
-(NSString *)localizedDescription;
-(long long)state;
-(void)setState:(long long)arg1;
-(float)progress;
-(void)setProgress:(float)arg1;
-(void)setLocalizedDescription:(id)arg1;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(id)arg1;
-(void)setIsDevicePlugged:(BOOL)arg1;
-(void)setIsDaysMonthsYearsStructureEnabled:(BOOL)arg1;
-(void)setDisplayProgress:(float)arg1;
-(float)displayProgress;
-(BOOL)isDaysMonthsYearsStructureEnabled;
-(BOOL)isDevicePlugged;

@end

