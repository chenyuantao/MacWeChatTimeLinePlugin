//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatLogBaseCellView.h"

@class MMImageView, NSImageView, NSString, NSTextField;

@interface MMChatLogVideoCellView : MMChatLogBaseCellView
{
    BOOL _isShouldOpenOnDownloadFinish;
    BOOL _isWebStreamVideo;
    MMImageView *_thumbnailImageView;
    NSTextField *_videoDescriptionTextView;
    NSTextField *_videoDurationTextView;
    NSString *_videoFilePath;
    NSString *_videoThumbPath;
    NSImageView *_iconImageView;
}

+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 constrainedToWidth:(double)arg4;
@property(retain, nonatomic) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) BOOL isWebStreamVideo; // @synthesize isWebStreamVideo=_isWebStreamVideo;
@property(retain, nonatomic) NSString *videoThumbPath; // @synthesize videoThumbPath=_videoThumbPath;
@property(retain, nonatomic) NSString *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(nonatomic) BOOL isShouldOpenOnDownloadFinish; // @synthesize isShouldOpenOnDownloadFinish=_isShouldOpenOnDownloadFinish;
@property(retain, nonatomic) NSTextField *videoDurationTextView; // @synthesize videoDurationTextView=_videoDurationTextView;
@property(retain, nonatomic) NSTextField *videoDescriptionTextView; // @synthesize videoDescriptionTextView=_videoDescriptionTextView;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (id)videoThumbImageWithPath:(id)arg1;
- (void)openFile;
- (void)layoutVideoContentView;
- (void)layoutVideoDurationTextView;
- (id)getVideoDuration;
- (void)layoutVideoDescriptionTextView;
- (id)getVideoDescription;
- (void)populateWithFavItemDataField:(id)arg1;
- (void)populateWithFavItemDataField:(id)arg1 parentMessage:(id)arg2;
- (void)populateWithFavItemDataField:(id)arg1 parentFavItem:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
