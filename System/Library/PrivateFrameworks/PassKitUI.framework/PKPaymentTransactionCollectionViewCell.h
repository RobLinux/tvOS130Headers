/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardPaymentTransactionItem, PKPaymentTransactionGroupItem, PKPaymentTransactionView;

@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell {

	PKDashboardPaymentTransactionItem* _item;
	PKPaymentTransactionGroupItem* _groupItem;
	PKPaymentTransactionView* _transactionView;

}

@property (nonatomic,retain) PKDashboardPaymentTransactionItem * item;                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroupItem * groupItem;                 //@synthesize groupItem=_groupItem - In the implementation block
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView;              //@synthesize transactionView=_transactionView - In the implementation block
-(PKDashboardPaymentTransactionItem *)item;
-(void)setItem:(PKDashboardPaymentTransactionItem *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setGroupItem:(PKPaymentTransactionGroupItem *)arg1 ;
-(PKPaymentTransactionView *)transactionView;
-(PKPaymentTransactionGroupItem *)groupItem;
-(void)setShowsBottomSeparator:(BOOL)arg1 ;
-(double)maxWidthForTransactionCellInWidth:(double)arg1 ;
@end

