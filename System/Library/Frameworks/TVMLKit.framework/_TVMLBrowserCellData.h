/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionViewCell, _TVAppDocumentRequestController;

@interface _TVMLBrowserCellData : NSObject {

	BOOL _contentAvailable;
	BOOL _centered;
	UICollectionViewCell* _cell;
	_TVAppDocumentRequestController* _documentRequestController;

}

@property (nonatomic,__weak,readonly) UICollectionViewCell * cell;                                     //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) _TVAppDocumentRequestController * documentRequestController;              //@synthesize documentRequestController=_documentRequestController - In the implementation block
@property (assign,nonatomic) BOOL contentAvailable;                                                    //@synthesize contentAvailable=_contentAvailable - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;                                          //@synthesize centered=_centered - In the implementation block
-(void)setCentered:(BOOL)arg1 ;
-(BOOL)isCentered;
-(UICollectionViewCell *)cell;
-(void)setContentAvailable:(BOOL)arg1 ;
-(BOOL)contentAvailable;
-(id)initWithCell:(id)arg1 ;
-(_TVAppDocumentRequestController *)documentRequestController;
-(void)setDocumentRequestController:(_TVAppDocumentRequestController *)arg1 ;
@end

