quest how_to_use_is_safezone begin
	state start begin

		when 50512.use begin -- change 50512 with your item vnum
			if pc.is_safezone() then -- you are in safe-zone
				syschat("You are in safe-zone.")
			else
				syschat("You aren't in safe-zone.")
			end
		end

		when login begin
			if pc.is_safezone() then -- you are in safe-zone
				syschat("You are in safe-zone.")
			else
				syschat("You aren't in safe-zone.")
			end
		end

	end 
end
