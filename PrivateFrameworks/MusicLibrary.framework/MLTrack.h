/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLTrack : NSObject 
{
    void *_trackDulcRep;
}


- (id)initWithTrackContext:(void*)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)isEqualToTrack:(id)arg1;
- (id)stringValueForProperty:(unsigned long)arg1;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1;
- (double)timeValueForProperty:(unsigned long)arg1;
- (void*)trackInfoContext;
- (unsigned long)number;
- (unsigned long)numberOfTracksInAlbum;
- (unsigned long long)persistentUID;
- (unsigned long long)globalID;
- (unsigned long)uniqueID;
- (unsigned long)audibleDRMGroupID;
- (id)path;
- (id)title;
- (id)artist;
- (id)albumArtist;
- (id)album;
- (id)composer;
- (id)genre;
- (id)category;
- (id)grouping;
- (BOOL)isCompilationTrack;
- (BOOL)isExcludedFromShuffle;
- (BOOL)isRental;
- (BOOL)isDemoRental;
- (double)demoRentalExpirationDate;
- (BOOL)isOTAPurchasedContent;
- (id)seriesDisplayName;
- (id)seasonDisplayName;
- (id)podcastName;
- (id)podcastURL;
- (id)podcastStoreURL;
- (id)audioBookName;
- (id)infoDescription;
- (id)comments;
- (id)contentRatingInfo;
- (id)eqPreset;
- (float)volumeAdjustment;
- (float)volumeNormalization;
- (NSUInteger)seasonNumber;
- (NSUInteger)episodeNumber;
- (double)releaseDate;
- (NSInteger)duration;
- (NSInteger)durationInMS;
- (NSInteger)startTimeInMS;
- (NSInteger)stopTimeInMS;
- (NSInteger)customStopTimeInMS;
- (id)chapterTOC;
- (BOOL)hasLyrics;
- (BOOL)hasVideoData;
- (BOOL)rating;
- (void)setRating:(BOOL)arg1;
- (BOOL)videoHasAlternateAudio;
- (BOOL)videoHasSubtitles;
- (NSUInteger)videoAudioTrackID;
- (void)setVideoAudioTrackID:(NSUInteger)arg1;
- (NSUInteger)videoSubtitleTrackID;
- (void)setVideoSubtitleTrackID:(NSUInteger)arg1;
- (void)gaplessHeuristicInfo:(NSUInteger*)arg1 duration:(NSUInteger*)arg2 lastPacketsResync:(NSUInteger*)arg3 encodingDelay:(NSUInteger*)arg4 encodingDrain:(NSUInteger*)arg5;
- (BOOL)hasImageData;
- (BOOL)sharesArtworkWithTrack:(id)arg1 forFormatID:(NSUInteger)arg2 timeInMS:(NSUInteger)arg3;
- (id)bestImageDataForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)bestImageDataForSize:(struct CGSize { float x1; float x2; })arg1 timeInMS:(NSUInteger)arg2 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { NSUInteger x_1_1_1; NSUInteger x_1_1_2; NSUInteger x_1_1_3; NSUInteger x_1_1_4; NSInteger x_1_1_5; NSInteger x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg3;
- (id)imageDataForArtworkFormatID:(NSUInteger)arg1 timeInMS:(NSUInteger)arg2 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { NSUInteger x_1_1_1; NSUInteger x_1_1_2; NSUInteger x_1_1_3; NSUInteger x_1_1_4; NSInteger x_1_1_5; NSInteger x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg3;
- (id)availableArtworkFormatIDsForTimeInMS:(NSUInteger)arg1;
- (BOOL)hasNominalAmountBeenPlayed;
- (double)nominalHasBeenPlayedThresholdInSeconds;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL*)arg2;
- (void)incrementSkipCount;
- (NSUInteger)skipCount;
- (double)lastSkippedDate;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (NSUInteger)playCount;
- (double)lastPlayedDate;
- (BOOL)markAsDeleted;
- (BOOL)isHidden;
- (BOOL)markHidden:(BOOL)arg1;
- (BOOL)shouldBookmarkLastPlayedTime;
- (BOOL)hasLastPlayedBookmarkTime;
- (void)clearLastPlayedBookmarkTime;
- (void)setLastPlayedBookmarkTimeInSeconds:(double)arg1;
- (double)lastPlayedBookmarkTimeInSeconds;
- (unsigned long)mediaType;

@end